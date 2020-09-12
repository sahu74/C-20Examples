
template<typename T, bool enable = true>
class Sample
{
public:
    int DisableThisMethodOnRequest() requires(enable) { return 42; }
};


template<typename T, bool enable = true>
class Sample1
{
public:
    std::enable_if_t<enable, int> DisableThisMethodOnRequest() { return 42; }
};


int main()
{

    Sample <int, true> ss;
    cout << " Sanple = " << ss.DisableThisMethodOnRequest() << endl;
    return 0;
}
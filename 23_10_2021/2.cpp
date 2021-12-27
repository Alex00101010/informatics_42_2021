float CalcDeposit(float P, int n, float I, int m) {
    float fn = (float)n;
    float fm = (float)m;
    float S = P * pow(1 + (I/(fm/12)), fm/(12*fn));
    return S;
}
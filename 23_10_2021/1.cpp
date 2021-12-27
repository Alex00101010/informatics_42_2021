float calculate(float val1, float val2, int operand) {
    float result = 0;
    switch(operand) {
        case 0:
            result = val1 + val2;
            break;
        case 1:
            result = val1 * val2;
            break;
        case 2:
            result = val1 / val2;
            break;
        case 3:
            result = val1 - val2;
            break;
        case 4:
            result = pow(val1, val2);
            break;
    }
    return result;
}
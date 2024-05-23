// 6 - Given a Binary number, convert it to Decimal
int binToDec(int binaryNumber) {
    
    int decimal = 0;
    int actualBase = 1;
    int actualDigit;
    int temp = binaryNumber;

    while (temp) {

        actualDigit = temp % 10;
        
        decimal += actualDigit * actualBase;

        temp /= 10;
        actualBase *= 2;

    }

    return decimal;
}
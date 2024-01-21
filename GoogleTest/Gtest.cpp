#include "pch.h"
#include "Gtest.h"


std::string CKonwerterFunctions::DecimalToBinary(int decimalValue) {
    std::string binaryString;
    while (decimalValue > 0) {
        binaryString.insert(binaryString.begin(), (decimalValue % 2) + '0');
        decimalValue /= 2;
    }

    if (binaryString.empty()) {
        binaryString = '0';
    }

    return binaryString;
}
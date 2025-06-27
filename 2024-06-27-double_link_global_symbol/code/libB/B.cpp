
#include "B.h"

#include "Common.h"

void printInLibB() {
    printf("%s:%d kProblemSymbol:%s\n", __func__, __LINE__, Common::kProblemSymbol.c_str());
}
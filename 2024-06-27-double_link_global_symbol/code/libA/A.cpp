
#include "A.h"

#include "Common.h"

void printInLibA() {
    printf("%s:%d kProblemSymbol:%s\n", __func__, __LINE__, Common::kProblemSymbol.c_str());
}
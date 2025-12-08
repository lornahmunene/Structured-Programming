// main.c
#include "login.h"
#include "functions.h"

int main() {
    if (login()) {
        while (display());
    }
    return 0;
}

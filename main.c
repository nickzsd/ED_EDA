#include "src/menu.c"

int main() {
    int Running = 1;

    initializeSYS();

    while (Running){
        setPath(&Running);
    }

    return 0;
}
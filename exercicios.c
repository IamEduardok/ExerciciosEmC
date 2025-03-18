#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// 1. Fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fatorial(n - 1);
}

// 2. Soma de números naturais
int soma(int n) {
    if (n == 0) {
        return 0;
    }
    return n + soma(n - 1);
}

// 3. Sequência de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// 4. Potência
int potencia(int x, int n) {
    if (n == 0) {
        return 1;
    }
    return x * potencia(x, n - 1);
}

// 5. Contagem regressiva
void contagemRegressiva(int n) {
    if (n < 0) {
        return;
    }
    printf("%d ", n);
    contagemRegressiva(n - 1);
}

// 6. Soma de dígitos
int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + somaDigitos(n / 10);
}

// 7. Inversão de string
void inverteString(char str, int inicio, int fim) {
    if (inicio >= fim) {
        return;
    }
    char temp = str[inicio];
    str[inicio] = str[fim];
    str[fim] = temp;
    inverteString(str, inicio + 1, fim - 1);
}

// 8. Verificação de palíndromo
bool ehPalindromo(charstr, int inicio, int fim) {
    if (inicio >= fim) {
        return true;
    }
    if (str[inicio] != str[fim]) {
        return false;
    }
    return ehPalindromo(str, inicio + 1, fim - 1);
}

// 9. Máximo divisor comum (MDC)
int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }
    return mdc(b, a % b);
}

// 10. Multiplicação recursiva
int multiplicar(int a, int b) {
    if (b == 0) {
        return 0;
    }
    return a + multiplicar(a, b - 1);
}
// 11. Contagem de caracteres
int contarCaracteres(char str, char c) {
    if (str == '\0') {
        return 0;
    }
    return (str == c) + contarCaracteres(str + 1, c);
}

// 12. Soma de elementos de um array
int somaArray(int arr[], int tamanho) {
    if (tamanho == 0) {
        return 0;
    }
    return arr[tamanho - 1] + somaArray(arr, tamanho - 1);
}

// 13. Verificação de número primo
bool ehPrimo(int n, int divisor) {
    if (divisor == 1) {
        return true;
    }
    if (n % divisor == 0) {
        return false;
    }
    return ehPrimo(n, divisor - 1);
}

// 14. Conversão de decimal para binário
void decimalParaBinario(int n) {
    if (n == 0) {
        return;
    }
    decimalParaBinario(n / 2);
    printf("%d", n % 2);
}

// 15. Impressão de números pares
void imprimirPares(int n) {
    if (n < 0) {
        return;
    }
    imprimirPares(n - 1);
    if (n % 2 == 0) {
        printf("%d ", n);
    }
}

// 16. Impressão de números ímpares
void imprimirImpares(int n) {
    if (n < 1) {
        return;
    }
    imprimirImpares(n - 1);
    if (n % 2 != 0) {
        printf("%d ", n);
    }
}

int main() {
   
    printf(" Fatorial de 5: %d\n", fatorial(5));
    printf(" Soma dos primeiros 4 números naturais: %d\n", soma(4));
    printf(" Fibonacci(6): %d\n", fibonacci(6));
    printf(" 2^5: %d\n", potencia(2, 5));
    printf(" Contagem regressiva de 3: ");
    contagemRegressiva(3);
    printf("\n");
    printf(" Soma dos dígitos de 1234: %d\n", somaDigitos(1234));
    char str[] = "recursão";
    inverteString(str, 0, strlen(str) - 1);
    printf(" String invertida: %s\n", str);
    char str2[] = "arara";
    printf(" 'arara' é palíndromo? %d\n", ehPalindromo(str2, 0, strlen(str2) - 1));
    printf(" MDC de 48 e 18: %d\n", mdc(48, 18));
    printf(" 4 5: %d\n", multiplicar(4, 5));
    printf(" Contagem de 'a' em 'abracadabra': %d\n", contarCaracteres("abracadabra", 'a'));
int arr[] = {1, 2, 3, 4};
    printf(" Soma dos elementos do array: %d\n", somaArray(arr, 4));
    printf(" 7 é primo? %d\n", ehPrimo(7, 7 / 2));
    printf(" Binário de 10: ");
    decimalParaBinario(10);
    printf("\n");
    printf(" Números pares até 6: ");
    imprimirPares(6);
    printf("\n");
    printf(" Números ímpares até 6: ");
    imprimirImpares(6);
    printf("\n");

    return 0;
}
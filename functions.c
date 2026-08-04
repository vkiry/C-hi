#include <stdio.h>

// 1. Прототипы функций (объявление)
void print_header(char app_name[]);
int calculate_area(int width, int height);

int main() {
    // Вызов функции void (ничего не возвращает)
    char my_app[] = "Terminal Tools v1.0";
    print_header(my_app);

    // Подготавливаем данные
    int w = 5;
    int h = 10;
    
    // Вызов функции с передачей аргументов и сохранением результата
    int area = calculate_area(w, h);
    
    printf("Площадь прямоугольника %d x %d равна %d\n", w, h, area);

    return 0;
}

// 2. Определение функций (реализация)

// Функция выводит красивый заголовок в консоль
void print_header(char app_name[]) {
    printf("===================================\n");
    
    printf("  %s\n", app_name);

    printf("===================================\n\n");
}

// Функция принимает два числа, умножает их и возвращает результат
int calculate_area(int width, int height) {
    int result = width * height; // result - локальная переменная

    return result; // Возвращаем значение туда, откуда вызвали функцию
}
#include <stdio.h>

int main() {
    int age = 25;
    float weight = 70.5f;
    char grade = 'A';

    printf("Стартовые данные:\n");
    printf("Возраст: %d лет\n", age);
    printf("Вес: %.1f кг\n", weight);
    printf("Категория: %c\n", grade);

    int current_year;
    
    printf("\nВведите текущий год: ");
    // Функция scanf ждет ввода с клавиатуры
    // Важно: перед именем переменной обязательно ставится знак &
    scanf("%d", &current_year); 

    printf("Отлично! Сейчас %d год.\n", current_year);

    return 0;
}
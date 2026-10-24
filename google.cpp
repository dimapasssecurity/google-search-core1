#include <iostream>
#include <clocale> // для setlocale
#include <cstdlib> // для system

void renderImageAnswer() {
    std::cout << "[GOOGLE IMAGES]: Наглядная графическая схема процесса:" << std::endl;
    std::cout << "URL: https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSwmL51-A1L2US0G3a7Eciy1VRNjRRTvFUFad66Zv3VmbdD5SgLVzcTEkB&s=10" << std::endl;
}

int main() {
    // Устанавливаем кодировку консоли в UTF-8 (для Windows)
    system("chcp 65001 > nul");
    
    // Устанавливаем русскую локаль
    std::setlocale(LC_ALL, "Russian");

    renderImageAnswer();

    std::cout << " " << std::endl;
    std::cout << "Найдено результатов: 1 420 000 (за 0.042 сек)" << std::endl;
    
    return 0;
}
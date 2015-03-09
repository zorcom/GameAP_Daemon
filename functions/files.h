#include <string>
#include <vector>

#ifndef FILES_H
#define FILES_H 

// ---------------------------------------------------------------------

/**
 * Проверка на существование файла
 */
bool file_exists(std::string file_name);

// ---------------------------------------------------------------------

/**
 * Листинг директории
 */
int getdir (std::string dir, std::vector<std::string> &files);

// ---------------------------------------------------------------------

/**
 * Получение содержимого файла
 */
std::string file_get_contents(std::string filename);

// ---------------------------------------------------------------------

/**
 * Запись содержимого файла
 */
bool file_put_contents(std::string filename, std::string contents);

// ---------------------------------------------------------------------

/**
 * Получение размера файла
 */
int filesize(std::string filename);

// ---------------------------------------------------------------------

/**
 * Получение информации о последей модификации файла
 */
int filemtime(std::string filename);

// ---------------------------------------------------------------------

/**
 * Проверяет, является ли файл директорией
 */
bool is_dir(std::string filename);

// ---------------------------------------------------------------------

/**
 * Создание директории
 */
bool make_dir(std::string dir, std::string permissions);

// ---------------------------------------------------------------------

void change_dir(std::string dir);


#endif

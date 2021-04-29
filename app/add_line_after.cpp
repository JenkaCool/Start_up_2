#include "_text.h"

/**
 * Добавляет одну строку к тексту после строки с указанным номером
 * @param txt текст
 * @param line_number номер строки, после которой нужно вставить новую строку
 * @param contents текст новой строки
 * @returns статус
 */

int add_line_after(const text txt, int line_number, string contents)
{
    list<string>::iterator it = txt->lines->begin();
    advance(it, line_number + 1);
    txt->lines->insert(it, contents);

    return SUCCESS;
}
#pragma once

struct TStudent {
    int _id;
    TStudent* _next;
};

void show(TStudent *head);
TStudent *InitTStudent();
void push_front(TStudent **head, int offset);
void clear(TStudent **head);


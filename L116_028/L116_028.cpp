/*Гамбург Алиса.
данный файл содержит функцию алгоритма самого короткого периода.
она нужна для выбора максимального набора непересекающихся интервалов (задач), отдавая приоритет интервалам с наименьшей продолжительностью. 
Применяется для планирования и минимизации времени ожидания задач*/
#include <iostream>
#include "SJF.h"

using namespace std;

int main() {
    vector<Interval> intervals = {
        {1, 3, 0}, {2, 5, 1}, {6, 8, 2}, {3, 7, 3}, {9, 10, 4}, {10, 11, 5}
    };

    vector<int> result = shortestJobFirst(intervals);

    cout << "Выбранные интервалы (индексы): ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;
    return 0;
}

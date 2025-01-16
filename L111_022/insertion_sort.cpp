/*Алиса Гамбург. Файл содержит функцию сортировки вставками, 
она берет неотсортированный массив arr и его размер n, 
и сортирует его на месте, вставляя каждый элемент на правильную позицию
 в уже отсортированной части массива.
эта функция нужна для сортировки массивов в порядке возрастания. 
Она особенно полезна для небольших или почти отсортированных массивов, и проста в реализации.*/
void insertion_sort(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    int key = arr[i]; // сохр. текущ. эл-нт в переменной кей
    int j = i - 1; // индекс предыдущего эл-нта

    // Перемещаем элементы, большие чем key, на один шаг вправо
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = key;
  }
}
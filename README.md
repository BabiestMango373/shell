Алгоритм сортировки Шелла

1 Вычисляется расстояние между элементами(step) 

2 Массив разбивается на списки элементов, отстающих друг от друга на step 

3 Элементы каждого списка сортируются методом вставки 

4 Происходит объединение списков обратно в массив, уменьшается step, если step > 0, то происходит переход обратно на шаг 2


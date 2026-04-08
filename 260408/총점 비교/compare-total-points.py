n = int(input())

name = []
score1 = []
score2 = []
score3 = []

for _ in range(n):
    student_input = input().split()
    name.append(student_input[0])
    score1.append(int(student_input[1]))
    score2.append(int(student_input[2]))
    score3.append(int(student_input[3]))

# Please write your code here.
people = []

for i in range(n):
    temp = [name[i], score1[i], score2[i], score3[i]]
    people.append(temp)

for i in range(n):
    people[i].append(sum(people[i][1:4]))

people.sort(key=lambda x:(x[4]))

for p in people:
    print(*p[:4])
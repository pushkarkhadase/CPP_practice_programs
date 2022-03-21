#include <iostream>

using namespace std;

void gradingStudents(int unrounded_list[], int total_students){

    for(int i = 0 ;  i < total_students ; i++){
        int student_mark = unrounded_list[i];

        if(student_mark > 37){
            if((student_mark+ 1) % 5 == 0) student_mark += 1;
            else if((student_mark + 2) % 5 == 0) student_mark += 2;
            else continue;
        }
        else{
            continue;
        }

        unrounded_list[i] = student_mark;
    }

    cout << "\n printing all the rounded list \n";

    for(int i = 0 ; i < total_students ;  i++){
        cout << unrounded_list[i] << endl;
    }


}

int main(){
    int student_count = 0;
    cin >> student_count;

    int marks[student_count];

    for(int i = 0 ; i < student_count ; i++){
        cin >> marks[i];
    }
    gradingStudents(marks , student_count);

    return 0;
}

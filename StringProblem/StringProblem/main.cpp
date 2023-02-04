//
//  main.cpp
//  StringProblem
//
//  Created by suraj kumar on 04/02/23.
//

#include <iostream>
//MARK: Finding Duplicate character in string:
void DuplicateCharacter(char A[]) {
    int i;
    char H[26];
    for (i = 0; A[i] != '\0'; i++) {
        H[A[i] - 97] += 1;
    }
    for (i = 0; i < 26; i++) {
        if(H[i] > 1) {
            printf("%c", i +  97);
            
        }
    }
}
int main() {
    char A[] = "finding";
    DuplicateCharacter(A);
}

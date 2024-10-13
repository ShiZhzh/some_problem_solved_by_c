#include <stdio.h>

#define SIZE 15

// ��Ϸ����
char board[SIZE][SIZE];

// ��ʼ������
void initializeBoard() {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            board[i][j] = '-';
        }
    }
}

// ��ӡ����
void printBoard() {
    printf("  ");
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", i + 1);
    }
    printf("\n");
    
    for (int i = 0; i < SIZE; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < SIZE; j++) {
            printf("%2c ", board[i][j]);
        }
        printf("\n");
    }
}

// ����
void makeMove(int row, int col, char piece) {
    board[row][col] = piece;
}

// �ж��Ƿ���������
int checkWin(int row, int col, char piece) {
    int count = 1;
    
    // ������
    for (int i = col - 1; i >= 0 && board[row][i] == piece; i--) {
        count++;
    }
    for (int i = col + 1; i < SIZE && board[row][i] == piece; i++) {
        count++;
    }
    if (count >= 5) {
        return 1;
    }
    
    count = 1;
    
    // ������
    for (int i = row - 1; i >= 0 && board[i][col] == piece; i--) {
        count++;
    }
    for (int i = row + 1; i < SIZE && board[i][col] == piece; i++) {
        count++;
    }
    if (count >= 5) {
        return 1;
    }
    
    count = 1;
    
    // ���ϵ�����б�߼��
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0 && board[i][j] == piece; i--, j--) {
        count++;
    }
    for (int i = row + 1, j = col + 1; i < SIZE && j < SIZE && board[i][j] == piece; i++, j++) {
        count++;
    }
    if (count >= 5) {
        return 1;
    }
    
    count = 1;
    
    // ���µ�����б�߼��
    for (int i = row + 1, j = col - 1; i < SIZE && j >= 0 && board[i][j] == piece; i++, j--) {
        count++;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < SIZE && board[i][j] == piece; i--, j++) {
        count++;
    }
    if (count >= 5) {
        return 1;
    }
    
    return 0;
}

int main() {
    int row, col;
    char player1 = 'X', player2 = 'O';
    char currentPlayer = player1;
    
    initializeBoard();
    
    printf("��ӭ������������Ϸ��\n");
    
    while (1) {
        printBoard();
        
        printf("�����%c��������λ�ã��� �У���", currentPlayer);
        scanf("%d %d", &row, &col);
        
        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row - 1][col - 1] != '-') {
            printf("����λ����Ч�����������롣\n");
            continue;
        }
        
        makeMove(row - 1, col - 1, currentPlayer);
        
        if (checkWin(row - 1, col - 1, currentPlayer)) {
            printf("���%c��ʤ����Ϸ������\n", currentPlayer);
            break;
        }
        
        if (currentPlayer == player1) {
            currentPlayer = player2;
        } else {
            currentPlayer = player1;
        }
    }
    
    printBoard();
    
    return 0;
}

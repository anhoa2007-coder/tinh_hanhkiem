#include <stdio.h>

// Ham anh xa diem so thuc sang mot chi so nguyen dai dien cho hoc luc
int map_score_to_rank(double score) {
    // Kiem tra gia tri khong hop le
    if (score < 0 || score > 10) {
        return -1;
    } 
    // Hoc luc Xuat sac: Diem >= 9
    else if (score >= 9) {
        return 6; 
    } 
    // Hoc luc Gioi: 9 > Diem >= 8
    else if (score >= 8) {
        return 5; 
    } 
    // Hoc luc Kha: 8 > Diem >= 6.5
    else if (score >= 6.5) {
        return 4; 
    } 
    // Hoc luc Trung binh: 6.5 > Diem >= 5
    else if (score >= 5) {
        return 3; 
    } 
    // Hoc luc Yeu: 5 > Diem >= 3.5
    else if (score >= 3.5) {
        return 2; 
    } 
    // Hoc luc Kem: 3.5 > Diem
    else { 
        return 1; 
    }
}

// Ham hien thi ket qua su dung lenh switch-case
void print_academic_performance(int rank) {
    // Su dung switch-case tren chi so hoc luc da duoc anh xa
    switch (rank) {
        case 6:
            printf("Hoc luc: XUAT SAC\n");
            break;
        case 5:
            printf("Hoc luc: GIOI\n");
            break;
        case 4:
            printf("Hoc luc: KHA\n");
            break;
        case 3:
            printf("Hoc luc: TRUNG BINH\n");
            break;
        case 2:
            printf("Hoc luc: YEU\n");
            break;
        case 1:
            printf("Hoc luc: KEM\n");
            break;
        default:
            printf("Loi: Diem khong hop le (Diem phai nam trong khoang 0-10).\n");
            break;
    }
}

int main() {
    double score;

    printf("--- CHUONG TRINH TINH HOC LUC ---\n");
    printf("Nhap diem cua sinh vien (0-10): ");

    // Doc gia tri diem (double) tu nguoi dung bang scanf
    if (scanf("%lf", &score) != 1) {
        // Xu ly loi nhap du lieu
        printf("Loi nhap du lieu.\n");
        return 1;
    }

    // Kiem tra tinh hop le cua diem
    if (score < 0 || score > 10) {
        printf("Diem khong hop le. Diem phai nam trong khoang 0-10.\n");
        return 1;
    }
    
    // 1. Anh xa diem so thuc ve chi so nguyen
    int academic_rank = map_score_to_rank(score);

    // Hien thi diem (%.2f de lam tron den 2 chu so thap phan)
    printf("\nSinh vien dat %.2f diem.\n", score);
    
    // 2. Su dung switch-case de hien thi hoc luc
    print_academic_performance(academic_rank);

    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;

// Function to map score to academic rank
int map_score_to_rank(double score) {
    if (score < 0 || score > 10) {
        return -1; // Invalid score
    } else if (score >= 9) {
        return 6; // Hoc luc xuat sac
    } else if (score >= 8) {
        return 5; // Hoc luc gioi
    } else if (score >= 6.5) {
        return 4; // Hoc luc kha
    } else if (score >= 5) {
        return 3; // Hoc luc trung binh
    } else if (score >= 3.5) {
        return 2; // Hoc luc yeu
    } else { // score < 3.5
        return 1; // Hoc luc kem
    }
}

void print_academic_performance(int rank) {
    // Used switch-case to determine and print academic performance
    switch (rank) {
        case 6:
            cout << "Hoc luc: XUAT SAC" << endl;
            break;
        case 5:
            cout << "Hoc luc: GIOI" << endl;
            break;
        case 4:
            cout << "H?c l?c: KHA" << endl;
            break;
        case 3:
            cout << "H?c l?c: TRUNG BINH" << endl;
            break;
        case 2:
            cout << "H?c l?c: YEU" << endl;
            break;
        case 1:
            cout << "H?c l?c: KEM" << endl;
            break;
        default:
            cout << "Diem so khong hop le!" << endl;
            break;
    }
}

int main() {
    double score;

    // --- Input: Insert student score ---
    cout << "--- CHUONG TRINH XEP LOAI HOC LUC SINH VIEN ---" << endl;
    cout << "Nhap diem so cua sinh vien (0-10): ";

    // Validate input
    while (!(cin >> score) || score < 0 || score > 10) {
        cout << "Loi: Vui long nhap diem hop le (0-10): ";
        cin.clear(); // Delete error flag
        cin.ignore(100, '\n'); // Delete invalid input
    }
    
    // --- Processing & Output ---
    
    // 1. Map score to academic rank
    int academic_rank = map_score_to_rank(score);

    cout << fixed << setprecision(2); // Set precision for score display
    cout << "\nDiem so cua sinh vien: " << score << endl;
    
    // 2. Print academic performance
    print_academic_performance(academic_rank);

    return 0;
}

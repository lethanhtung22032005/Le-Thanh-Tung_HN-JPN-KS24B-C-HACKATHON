#include <stdio.h>

int main() {
    int phanTu;
    int luaChon;
    int arr[100];
    do {
        printf("--------------MENU---------------\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Dem so luong cac so hoan hao trong mang\n");
        printf("4. Tim gia tri nho thu hai trong mang\n");
        printf("5. Them mot phan tu vao vi tri dau tien trong mang\n");
        printf("6. Xoa phan tu tai vi tri cu the\n");
        printf("7. Sap xep mang theo thu tu giam dan\n");
        printf("8. Tim kiem phan tu trong mang\n");
        printf("9. Sap xep lai mang va hien thi (so le dung truoc, so chan dung sau)\n");
        printf("10. Dao nguoc thu tu cua cac phan tu trong mang\n");
        printf("11. Thoat\n");
        printf("Moi ban nhap lua chon: ");
        scanf("%d", &luaChon);
        switch (luaChon) {
            case 1:
                printf("Nhap so phan tu cua mang: ");
                scanf("%d", &phanTu);
                printf("Nhap cac gia tri cho mang: ");
                for (int i = 0; i < phanTu; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Mang vua nhap la: ");
                for (int i = 0; i < phanTu; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                printf("Mang vua nhap la: ");
                for (int i = 0; i < phanTu; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 3:
                {
                    int count = 0;
                    for (int i = 0; i < phanTu; i++) {
                        int sum = 0;
                        for (int j = 1; j <= arr[i] / 2; j++) {
                            if (arr[i] % j == 0) {
                                sum += j;
                            }
                        }
                        if (sum == arr[i]) {
                            count++;
                        }
                    }
                    printf("So luong cac so hoan hao co trong mang la: %d\n", count);
                }
                break;
            case 4:
                if (phanTu < 2) {
                    printf("Khong co gia tri nho thu hai\n");
                } else {
                    int min1 = arr[0], min2 = arr[1];
                    if (min1 > min2) {
                        int temp = min1;
                        min1 = min2;
                        min2 = temp;
                    }
                    for (int i = 2; i < phanTu; i++) {
                        if (arr[i] < min1) {
                            min2 = min1;
                            min1 = arr[i];
                        } else if (arr[i] < min2) {
                            min2 = arr[i];
                        }
                    }
                    printf("Gia tri nho thu hai trong mang la: %d\n", min2);
                }
                break;
            case 5:
                if (phanTu >= 100) {
                    printf("Mang da day, khong the them phan tu\n");
                } else {
                    int new_value;
                    printf("Nhap gia tri can them: ");
                    scanf("%d", &new_value);
                    for (int i = phanTu; i > 0; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[0] = new_value;
                    phanTu++;
                    printf("Mang sau khi them: ");
                    for (int i = 0; i < phanTu; i++) {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 6:
                if (phanTu == 0) {
                    printf("Mang rong, khong co phan tu de xoa\n");
                } else {
                    int pos;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &pos);
                    if (pos < 0 || pos >= phanTu) {
                        printf("Vi tri khong hop le\n");
                    } else {
                        for (int i = pos; i < phanTu - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        phanTu--;
                        printf("Mang sau khi xoa: ");
                        for (int i = 0; i < phanTu; i++) {
                            printf("%d ", arr[i]);
                        }
                        printf("\n");
                    }
                }
                break;
            case 7:
            	printf("Chua co chuc nang nay, moi nhap lua chon khac\n");
                break;
            case 8:
                {
                	printf("Chua co chuc nang nay, moi nhap lua chon khac\n");
                }
                break;
            case 9:
            	printf("Chua co chuc nang nay, moi nhap lua chon khac\n");
                break;
            case 10:
                for (int i = 0; i < phanTu / 2; i++) {
                    int temp = arr[i];
                    arr[i] = arr[phanTu - i - 1];
                    arr[phanTu - i - 1] = temp;
                }
                printf("Mang sau khi dao nguoc: ");
                for (int i = 0; i < phanTu; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 11:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le\n");
                break;
        }
    } while (luaChon != 11);

    return 0;
}

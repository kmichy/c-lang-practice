#include <stdio.h>

int main(void){
    char str[] = "kitty on your lap";
    char *str_p;
    char **str_pp;

    str_p = str;
    str_pp = &str_p;

    printf("�����^�z��ϐ�\n");
    printf("�z��擪�A�h���X = %p\n",str);
    printf("�ێ����镶���� = %s\n\n",str);
    
    printf("�|�C���^�̎����l\n");
    printf("�|�C���^�A�h���X = %p\n",&str_p);
    printf("�ێ����镶���� = %p\n",str_p);
    printf("�ێ�����A�h���X�������e = %s\n\n",str_p);
    
    printf("�|�C���^�̃|�C���^�������l\n");
    printf("�|�C���^�̃|�C���^�A�h���X = %p\n",&str_pp);
    printf("�ێ�����l = %p\n",str_pp);
    printf("�ێ�����l�����l = %p\n",*str_pp);
    printf("�ێ�����l�����l�̓��e = %s\n\n",*str_pp);
}
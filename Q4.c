#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    pid_t pid;

    // fork() �Լ��� ����Ͽ� ���ο� ���μ��� ����
    pid = fork();

    if (pid < 0) {
        fprintf(stderr, "���μ��� ���� ����\n");
        return 1;
    }
    else if (pid == 0) {
        // �ڽ� ���μ����� ��
        printf("�ڽ� ���μ��� - PID: %d\n", getpid());
        printf("�θ� ���μ��� - PID: %d\n", getppid());
    }
    else {
        // �θ� ���μ����� ��
        printf("�θ� ���μ��� - PID: %d\n", getpid());
        printf("���ο� �ڽ� ���μ��� ���� - PID: %d\n", pid);
    }

    return 0;
}


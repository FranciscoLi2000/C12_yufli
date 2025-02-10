# 编译器及编译选项
CC = cc
CFLAGS = -Wall -Wextra -Werror
# 练习列表
EXERCISES = ex00 ex01 ex02 ex03 ex04 ex05 ex06 ex07 ex08 \
	    ex09 ex10 ex11 ex12 ex13 ex14 ex15 ex16 ex17
# 默认构建所有练习
all: $(EXERCISES)
# 定义每个练习的构建规则
$(EXERCISES):
	@echo "Compiling $@..."
	@$(CC) $(CFLAGS) ./$@/*.c -o ./$@/$@.o
	@echo "$@ compiled successfully"
# 清理所有生成的文件
clean:
	@for dir in $(EXERCISES); do \
		rm -f $$dir/*.o $$dir/*.o;
	done
	@echo "All binaries cleaned"
# 重新构建
re: clean all

.PHONY: all clean re $(EXERCISES)

class Solution:
    def calculate(self, s):
        stack = []
        num = 0
        op = '+'

        for i, c in enumerate(s + '+'):
            if c.isdigit():
                num = num * 10 + int(c)

            elif c != ' ':
                if op == '+':
                    stack.append(num)
                elif op == '-':
                    stack.append(-num)
                elif op == '*':
                    stack[-1] *= num
                else:
                    stack[-1] = int(stack[-1] / num)

                op = c
                num = 0

        return sum(stack)
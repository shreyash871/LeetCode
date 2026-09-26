class Solution:
    def asteroidCollision(self, asteroids):
        stack = []

        for x in asteroids:
            alive = True

            while alive and x < 0 and stack and stack[-1] > 0:
                if stack[-1] < -x:
                    stack.pop()
                elif stack[-1] == -x:
                    stack.pop()
                    alive = False
                else:
                    alive = False

            if alive:
                stack.append(x)

        return stack
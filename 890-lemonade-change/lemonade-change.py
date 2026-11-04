class Solution:
    def lemonadeChange(self, bills: list[int]) -> bool:
        res = []
        for bill in bills:
            if bill==5:
                res.append(bill)
            elif bill==10:
                if 5 in res:
                    res.remove(5)
                    res.append(bill)
                else:
                    return False
            else:
                if (10 in res and 5 in res):
                    res.remove(10)
                    res.remove(5)
                    res.append(bill)
                elif (res.count(5)>=3):
                    for i in range(3):
                        res.remove(5)
                else:
                    return False
        return True
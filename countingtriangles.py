#https://www.facebookrecruiting.com/portal/coding_practice_question/?problem_id=720422605157879&c=4813009892153577&ppid=5892836577408537&practice_plan=0

def countDistinctTriangles(arr):
  count=1
  mylist=[list(i) for i in arr]
  for p in mylist:
    p.sort()
  mylist.sort()
  for j in range(0, len(mylist)-1):
    if mylist[j]!=mylist[j+1]:
        count=count+1
  return count
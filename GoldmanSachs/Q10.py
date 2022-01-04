import heapq
class Solution:
    #Function to return k largest elements from an array.
    def kLargest(self,li):
        heap = []
        for value in li:
            #pushing the current value in Heap.
            heapq.heappush(heap, value)
            #if size of Heap becomes greater than k, we pop the element.
            if len(heap) > 10:
                heapq.heappop(heap)
        
        ans = []
        
        #while heap is not empty, we store the top element in list and pop it.
        while len(heap) > 0:
            ans.append(heapq.heappop(heap))
            
        #reversing the list and returning it.
        ans.reverse()
        return ans

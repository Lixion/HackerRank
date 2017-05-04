def floodPath(current_y, current_x, maxBound):
	connected = 0
	if (current_y + 1) < maxBound and mapArray[current_y + 1][current_x] == 0 and mapVisited[current_y + 1][current_x] != 1:
		connected += 1
		mapVisited[current_y + 1][current_x] = 1
		connected += floodPath(current_y + 1, current_x, maxBound)

	if (current_y - 1) > 0 and mapArray[current_y - 1][current_x] == 0 and mapVisited[current_y - 1][current_x] != 1:
		connected += 1
		mapVisited[current_y - 1][current_x] = 1
		connected += floodPath(current_y - 1, current_x, maxBound)

	if (current_x - 1) > 0 and mapArray[current_y][current_x - 1] == 0 and mapVisited[current_y][current_x - 1] != 1:
		connected += 1
		mapVisited[current_y][current_x - 1] = 1
		connected += floodPath(current_y, current_x - 1, maxBound)

	if (current_x + 1) < maxBound and mapArray[current_y][current_x + 1] == 0 and mapVisited[current_y][current_x + 1] != 1:
		connected += 1
		mapVisited[current_y][current_x + 1] = 1
		connected += floodPath(current_y, current_x + 1, maxBound)

	if (current_x + 1) < maxBound and (current_y + 1) < maxBound and mapArray[current_y + 1][current_x + 1] == 0 and mapVisited[current_y + 1][current_x + 1] != 1:
		connected += 1
		mapVisited[current_y + 1][current_x + 1] = 1
		connected += floodPath(current_y + 1, current_x + 1, maxBound)

	if (current_x + 1) < maxBound and (current_y - 1) > 0 and mapArray[current_y - 1][current_x + 1] == 0 and mapVisited[current_y - 1][current_x + 1] != 1:
		connected += 1
		mapVisited[current_y - 1][current_x + 1] = 1
		connected += floodPath(current_y - 1, current_x + 1, maxBound)

	if (current_x - 1) > 0 and (current_y + 1) < maxBound and mapArray[current_y + 1][current_x - 1] == 0 and mapVisited[current_y + 1][current_x - 1] != 1:
		connected += 1
		mapVisited[current_y + 1][current_x - 1] = 1
		connected += floodPath(current_y + 1, current_x - 1, maxBound)

	if (current_x - 1) > 0 and (current_y - 1) > 0 and mapArray[current_y - 1][current_x - 1] == 0 and mapVisited[current_y - 1][current_x - 1] != 1:
		connected += 1
		mapVisited[current_y - 1][current_x - 1] = 1
		connected += floodPath(current_y - 1, current_x - 1, maxBound)

	if connected == 0:
		return 0
	else:
		return connected

mapArray = [
[0, 0, 1, 2],
[0, 1, 1, 0],
[1, 1, 1, 0],
[0, 0, 1, 1]
]

MAX = 4 

#import sys
#MAX = 0
#for line in sys.std:
#	if MAX == 0:
#		MAX = line
#	else:
#		mapArray.append(line.split())

mapVisited = []
for line in mapArray:
	row = []
	for num in line:
		if num == 0:
			row.append(0)
		else:
			row.append(1)
	mapVisited.append(row)

waterSizes = []
i = 0
for row in mapArray:
	j = 0
	for num in row:
		if num == 0 and mapVisited[i][j] == 0:
			print i, j
			mapVisited[i][j] = 1
			size = 1 + floodPath(i, j, MAX)
			waterSizes.append(size)
		j += 1
	i += 1
for e in waterSizes:
	print e
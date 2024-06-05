my_data=housing

#initialising column names
names(my_data)[1:14]=c("CRIM","ZN","INDUS","CHAS","NOX","RM","AGE","DIS","RAD","TAX","PTRATIO","B","LSTAT","MEDV")

#using help funtion to know more about aggregate function
help("aggregate")

#using aggregate function to find the mean of MEDV grouped by CHAS column
agg=aggregate(my_data$MEDV ~ my_data$CHAS,my_data,mean,na.rm=T)
print(agg)

#partiotioning the graph into 4 quadrants to view all graphs simultaneously
par(mfrow=c(2,2))
boxplot(my_data$AGE,main="AGE INFO GRAPH",col="cyan")
boxplot(my_data$TAX,main="TAX INFORMATION ",col="red")
boxplot(my_data$LSTAT,main="LSTAT GRAPH",col="green")
boxplot(my_data$MEDV,main="MEDV INFO",col="blue")


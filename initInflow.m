%run this before Simulink to set up in flow data 
a = 95;
b = 105;
%random cash price 
cpr = (b-a).*rand(1000,1) + a;
%random future prices 
fpr = (b-a).*rand(1000,1) + a;

%time series for matrixes as specified Simulink From Workspace block
cprand = timeseries(rand(1000,1),cpr)
fprand = timeseries(rand(1000,1),fpr)


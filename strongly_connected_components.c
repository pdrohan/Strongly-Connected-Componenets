#include "extern_VSPVariables.h"

strongly_connected_components(adj)
int	**adj;
{

	int	i;

	k_num=0;
	for(i=0;i<=number;i++)label[i]=pointers[i]=0;

	for(i=1;i<=number;i++)if(!label[i]){
		i_num=0;j_num=0;
		visit_connectors_of(i,adj);
	}

	for(i=1;i<=number;i++)label[i]-=number;

	if(show_flag){
		sprintf(string_gbl,"\r\tThere are %d strongly connected components",label[0]);
		StringToWindow(DataWindow,string_gbl);
		if(k_num){
			sprintf(string_gbl,",\r\t%d of which contain more than one vertex",k_num);
			StringToWindow(DataWindow,string_gbl);
		}
	}
	
	return label[0];

}


visit_connectors_of(k,adj)
int	k,**adj;
{

	int	i,j,l,min;

	i_num++;
	label[k]=i_num;
	min=i_num;
	pointers[j_num]=k;j_num++;

	for(j=1;j<=number;j++){
		if(adj[k][j]){
			if(!label[j])l=visit_connectors_of(j,adj);
			else l=label[j];
			if(l<min)min=l;
		}
	}

	if(min==label[k]){
		j=0;
		label[0]++;
		while(i=1){
			j_num--;j++;
			label[pointers[j_num]]=label[0]+number;
			if(pointers[j_num]==k)break;
		}
		if(j>1)k_num++;
	}

	return min;

}

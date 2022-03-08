/*

			extern VSPVariables.h
			
			contains variables and definitions specific to the VSP

			github check
			
*/

/*
	Defaults
*/
#define	DN	300		/*	number of tasks		*/
#define	DV	300		/*	number of vehicles	*/
#define	DM	600		/*	2 * number of tasks	*/
#define	DD	200		/*	number of locations (depots)	*/
#define	DL	5000	/*	sort array size		*/
#define	DS	80		/*	string length		*/

extern	int	epsilon;

extern char			*DataFileName;
extern int			DataVRefNum;

extern char			*OutputFileName;
extern int			OutputVRefNum;


extern int		print_flag,output_open;
extern int		solution_flag,data_use_flag,info_flag,show_flag,edit_flag;
extern int		window_flag,vehicle_return_flag;
extern int		zero_one,directed_flag;
extern int		stop_flag,look_flag,look_flag_i,sort_flag,root_flag;
extern int		upper_bound_flag,pre_process_flag;

extern int		*code,*origin,*destination,*deletion_flag;
extern int		*job_pointer,DepotLabel;
extern int	*est,*lst,*duration,*window;
extern int	*xcoord,*ycoord;
extern int	*demand,*supply,*ToVehicle,*FromVehicle;
extern int	*VehicleCapacity,*VehicleRouteLength;

extern int	*VehicleEmptyTrip,*VehicleCargoTrip;
extern int	*VehicleInitialCost,*VehicleEarliness,*VehicleLateness;

extern int		*depot_decode;
extern int		num_depots,num_tasks,num_depots_def,num_tasks_def;
extern int		num_vehicles;

extern int	speed,fixed_cost,variable_cost,window_size,horizon,trip_limit,makespan;
extern int	**tll,**tj,**tr,**Distance,**tjj;
extern int		**JobJobCost;

extern int	total_earliness,earliness_cost;
extern int	total_return_trip,return_cost;

extern char	problem_type[DS];

		/*	assignment problem	*/
extern int		**cost,*col,number,infinity;
extern int	amult;
extern long		long_infinity;

		/*	graph data structure	*/
extern int	**f_adj_matrix,*dfs_number,*ts_number,acyclic_flag;
extern int	**adj_matrix,**class,**mark,comparability_flag;
extern int	*col_feasible,*row_feasible;
extern int	d_cycles,und_cycles,i_num,j_num,k_num,*label;
extern int	d_edges,und_edges,success,cycles,cycle_flag;

		/*	sort structure	*/
extern int		*pointers;
extern long		*array;

		/*	solution variables	*/
extern long	cost_of_upper_bound,cost_of_lower_bound;
extern int		*predecessor,vehicles,final_vehicles,feasible;
extern int	*start_time,final_cost,final_deadheading,*finish_time;

extern struct	days{
	 				char	name[10];
	 		} day[8];

		/*	ws1ca2 flags	*/
extern int	aflag,bflag;

		/*	others	*/
extern int		**veh_queue,*assigned_vehicle,last_cost,veh_inf;
extern int	*min_start_time,*max_start_time,*best_start_time;
extern int	schedule_start,schedule_end,scale_factor,lower_limit,upper_limit;
extern int	**float_array;

extern int		i_gbl,j_gbl,k_gbl,l_gbl,m_gbl,n_gbl;
extern int		u_gbl,v_gbl,w_gbl,y_gbl,z_gbl;
extern float	x_gbl;

		/*	special functions	*/
extern long		*start_timer(),*reset_timer();
extern double	cpu_time();

		/*	problem building variables	*/
extern int		OEarliness,OLateness,OEmptyTrips,OCargoTrips,OVehicles;
extern int		CEarliness,CLateness,CReturnTrips,CCapacity,CRouteLength,CTimeWindows,CCrews;
extern int		CActiveDepot,CMultiVisitDepot;
extern int		PVSP,PVRP,PTSP,PNEW;
extern int		ObjectivesVector[7],ConstraintsVector[9],ProblemVector[5];
extern char		ProblemName[DS];

extern char 	string_gbl[DS];
extern long		GlobalTimeStore;

#include "VSP routines.h"
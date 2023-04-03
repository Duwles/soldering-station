#ifndef SOLDERINGSTATION_H
#define SOLDERINGSTATION_H


class SolderingStation {
public:
	enum class State { 
		STANDBY	=	0,	
  		HEATING =	1,
		WORKING = 	2,
		DOCKED = 	3,
		COOLING = 	5
	};

    SolderingStation();
    
	void standby();
	void heating();
	void working();
	void docked();
	void startCooling();

private:
	State	state_;
};

#endif
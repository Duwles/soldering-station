#include "SolderingStation.h"

SolderingStation::SolderingStation()
{
	state_ = State::STANDBY;
}

void SolderingStation::standby()
{
	if (state_ == State::DOCKED) {
      	state_ = State::STANDBY;
    }
}

void SolderingStation::heating()
{
}

void SolderingStation::working()
{
	if (state_ == State::HEATING) {
      	state_ = State::WORKING;
    }
}

void SolderingStation::docked()
{
	if (state_ == State::WORKING) {
      	state_ = State::DOCKED;
    }
}

void SolderingStation::startCooling()
{
	if (state_ == State::WORKING) {
      	state_ = State::COOLING;
    }
}

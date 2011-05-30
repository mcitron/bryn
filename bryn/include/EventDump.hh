#ifndef hadronic_include_EventDump_hh
#define hadronic_include_EventDump_hh

//
//  EventDump.h
//
//  Created by Bryn Mathias on 2011-05-30.
//  Copyright (c) 2011 Imperial College. All rights reserved.
//
#include "EventData.hh"
#include "Math/VectorUtil.h"
#include "Operation.hh"
#include "TH1F.h"


namespace Operation {

class eventDump :public Operation::_Base
{
public:
  eventDump();
  ~eventDump(){};

  void Start( Event::Data & ev );
  bool Process( Event::Data & ev );
  void End( Event::Data & ev );

  std::ostream& Description(std::ostream& ostrm);


private:
  std::string evInfo_;
  /* data */
};



}

#endif // hadronic_include_EventDump_hh

#pragma once

namespace ime {

enum class RefereeState {
  Halt,
  Stop,
  Normal,

  OurPreKickoff,
  OurKickoff,
  OurDirect,
  OurIndirect,
  OurPrePenalty,
  OurPenalty,

  TheirPreKickoff,
  TheirKickoff,
  TheirDirect,
  TheirIndirect,
  TheirPrePenalty,
  TheirPenalty,
};

}
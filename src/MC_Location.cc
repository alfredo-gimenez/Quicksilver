#include "MC_Location.hh"
#ifdef HAVE_CALIPER
#include<caliper/cali.h>
#endif
#include "MonteCarlo.hh"
#include "MC_Domain.hh"
#include "DeclareMacro.hh"

//  Return a reference to the domain for this location.

HOST_DEVICE
const MC_Domain &MC_Location::get_domain(MonteCarlo *mcco) const
{
#ifdef HAVE_CALIPER
CALI_CXX_MARK_FUNCTION;
#endif
    return mcco->domain[domain];
}

HOST_DEVICE_END

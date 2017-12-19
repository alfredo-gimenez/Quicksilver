#include "MCT.hh"
#ifdef HAVE_CALIPER
#include<caliper/cali.h>
#endif
#include "MC_Domain.hh"
#include "Globals.hh"
#include "MonteCarlo.hh"
#include "DeclareMacro.hh"

class MC_Particle;

HOST_DEVICE

Subfacet_Adjacency &MCT_Adjacent_Facet(const MC_Location &location, MC_Particle &mc_particle, MonteCarlo* monteCarlo)

{
#ifdef HAVE_CALIPER
CALI_CXX_MARK_FUNCTION;
#endif
    MC_Domain &domain = monteCarlo->domain[location.domain];

    Subfacet_Adjacency &adjacency =domain.mesh._cellConnectivity[location.cell]._facet[location.facet].subfacet;

    return adjacency;
}

HOST_DEVICE_END

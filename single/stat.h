c
c     (C) Rasmus Munk Larsen, Stanford University, 2000
c

      integer nopx, nreorth, nreorthu, nreorthv, ndot, nitref, 
     c     nrestart, nbsvd, nlandim, nsing
      real    tmvopx, tgetu0, tupdmu, tupdnu, tintv, tlanbpro,
     c     treorthu, treorthv, telru, telrv, tbsvd, tnorm2,
     c     tlansvd, tritzvec, trestart, treorth, tdot

#ifdef ENABLE_COMMON_TIMING
      common/timing/ nopx, nreorth, ndot, nreorthu, nreorthv, nitref,
     c     nrestart, nbsvd, tmvopx, tgetu0, tupdmu, tupdnu, tintv,
     c     tlanbpro, treorth, treorthu, treorthv, telru, telrv, tbsvd,
     c     tnorm2, tlansvd, nlandim, tritzvec, trestart, tdot, nsing

      external second
#endif
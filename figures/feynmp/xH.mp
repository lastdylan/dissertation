% xH.mp -- do not edit, generated automatically by exclH.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 180*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$p_1$", __P1);
vvertex ("label=$p_2$", __P2);
vvertex ("label=$p_1$", __P1');
vvertex ("label=$p_2$", __P2');
vvertex ("label={\Large $H$}", __H);
vleft (__P1, __P2);
vright (__P1', __H, __P2');
vconnect ("fermion", __P1, __g1);
vconnect ("fermion", __P2, __g2);
vblob ((.15w), __g1, __g2);
vconnect ("gluon,tension=0.2,lab.side=right,lab={\Large $x_{1}$}", __g1, __v1);
vconnect ("gluon,tension=0.", __g1, __g2);
vconnect ("phantom,lab.side=left,lab={\Large $x_{1}^{'}$}", __g1, __v3);
vconnect ("phantom,lab.side=left,lab={\Large $x_{2}^{'}$}", __v3, __g2);
vconnect ("gluon,tension=0.2,lab.side=right,lab={\Large $x_{2}$}", __v2, __g2);
vpolygon ("empty,tension=0.28, label={\Large \bf $t$}", __v2, __v1, __t);
vconnect ("dashes", __t, __H);
vconnect ("fermion", __g1, __P1');
vconnect ("fermion", __g2, __P2');
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;

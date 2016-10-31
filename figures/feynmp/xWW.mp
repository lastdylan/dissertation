% xWW.mp -- do not edit, generated automatically by exclWW.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 100*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$p_1$", __P1);
vvertex ("label=$p_2$", __P2);
vvertex ("label=$p_1$", __P3);
vvertex ("label=$p_2$", __P4);
vvertex ("label=$W^-$", __W1);
vvertex ("label=$W^+$", __W2);
vleft (__P1, __P2);
vright (__P3, __W1, __W2, __P4);
vconnect ("fermion", __P1, __g1);
vconnect ("fermion", __P2, __g2);
vconnect ("fermion", __g1, __P3);
vconnect ("fermion", __g2, __P4);
vblob ((.15w), __g1, __g2);
vblob ((.10w), __v1);
vconnect ("photon,lab.side=left,lab=$\gamma $", __g1, __v1);
vconnect ("photon,lab.side=right,lab=$\gamma $", __g2, __v1);
vconnect ("boson", __v1, __W1);
vconnect ("boson", __v1, __W2);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;

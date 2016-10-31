% wLepton.mp -- do not edit, generated automatically by wlep.tex
input feynmp
require_RCS_revision "1.30";
beginchar(1, 150*1.0pt#, 100*1.0pt#, 0);
"feynmf: 1";
LaTeX_unitlength:=1.0pt;
subgraph (0, 0, w, h);
vinit;
pickup pencircle scaled thin;
vvertex ("label=$l$", __q1);
vvertex ("label=$\bar {\nu }_{l}$", __q2);
vvertex ("label=$W_{\mu }$", __g);
vleft (__g);
vright (__q1, __q2);
vvertex ("label=$\frac {\gamma ^{\mu }}{\sqrt {2}}(1-\gamma ^{5})$,label.dist=30", __v1);
vconnect ("boson,tenstion=2", __g, __v1);
vconnect ("fermion, tension=0.7", __q1, __v1);
vconnect ("fermion, tension=0.7", __v1, __q2);
vdotn (__v, 1);
vfreeze;
vdraw;
endsubgraph;
endchar;
% the end.
end.
endinput;

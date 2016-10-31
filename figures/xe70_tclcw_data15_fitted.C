void xe70_tclcw_data15_fitted()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Aug 19 12:18:26 2016) by ROOT version6.06/04
   TCanvas *c1 = new TCanvas("c1", "c1",0,45,800,692);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.12);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.26);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-86.74699,-0.03225806,636.1446,1.580645);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.12);
   pad1->SetRightMargin(0.05);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0.);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   
   Double_t xe70_tclcw_data15_fx3001[13] = {
   10,
   30,
   55,
   85,
   120,
   160,
   200,
   240,
   280,
   320,
   370,
   450,
   550};
   Double_t xe70_tclcw_data15_fy3001[13] = {
   0.005649718,
   0.02683781,
   0.0950129,
   0.323487,
   0.6755387,
   0.8871595,
   0.963964,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t xe70_tclcw_data15_felx3001[13] = {
   10,
   10,
   15,
   15,
   20,
   20,
   20,
   20,
   20,
   20,
   30,
   50,
   50};
   Double_t xe70_tclcw_data15_fely3001[13] = {
   0.002190452,
   0.003727824,
   0.005967367,
   0.01247139,
   0.01680651,
   0.02072575,
   0.02082618,
   0.03421472,
   0.04491424,
   0.09917226,
   0.1513615,
   0.2496484,
   0.3181538};
   Double_t xe70_tclcw_data15_fehx3001[13] = {
   10,
   10,
   15,
   15,
   20,
   20,
   20,
   20,
   20,
   20,
   30,
   50,
   50};
   Double_t xe70_tclcw_data15_fehy3001[13] = {
   0.00295756,
   0.004097131,
   0.006199755,
   0.01264096,
   0.01651013,
   0.0187213,
   0.01514287,
   0,
   0,
   0,
   0,
   0,
   0};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(13,xe70_tclcw_data15_fx3001,xe70_tclcw_data15_fy3001,xe70_tclcw_data15_felx3001,xe70_tclcw_data15_fehx3001,xe70_tclcw_data15_fely3001,xe70_tclcw_data15_fehy3001);
   grae->SetName("xe70_tclcw_data15");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph_graph30013001 = new TH1F("Graph_Graph_graph30013001","",100,0,600);
   Graph_Graph_graph30013001->SetMinimum(0);
   Graph_Graph_graph30013001->SetMaximum(1.5);
   Graph_Graph_graph30013001->SetDirectory(0);
   Graph_Graph_graph30013001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph_graph30013001->SetLineColor(ci);
   Graph_Graph_graph30013001->SetLineWidth(2);
   Graph_Graph_graph30013001->SetMarkerStyle(20);
   Graph_Graph_graph30013001->SetMarkerSize(1.2);
   Graph_Graph_graph30013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetXaxis()->SetLabelSize(0);
   Graph_Graph_graph30013001->GetXaxis()->SetTitleSize(0);
   Graph_Graph_graph30013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_graph30013001->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph_graph30013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_graph30013001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_graph30013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_graph30013001->GetYaxis()->SetRangeUser(0.002,1.5);
   Graph_Graph_graph30013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_graph30013001->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_graph30013001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_graph30013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_graph30013001);
   
   
   TF1 *myfit3002 = new TF1("myfit","[0]*(1.0+TMath::Erf((x-[1])/[2]))+[3]",0,600);
   myfit3002->SetFillColor(19);
   myfit3002->SetFillStyle(0);
   myfit3002->SetMarkerStyle(20);
   myfit3002->SetMarkerSize(1.2);
   myfit3002->SetLineColor(2);
   myfit3002->SetLineWidth(3);
   myfit3002->SetChisquare(0.6041896);
   myfit3002->SetNDF(9);
   myfit3002->GetXaxis()->SetLabelFont(42);
   myfit3002->GetXaxis()->SetLabelSize(0.035);
   myfit3002->GetXaxis()->SetTitleSize(0.035);
   myfit3002->GetXaxis()->SetTitleFont(42);
   myfit3002->GetYaxis()->SetLabelFont(42);
   myfit3002->GetYaxis()->SetLabelSize(0.035);
   myfit3002->GetYaxis()->SetTitleSize(0.035);
   myfit3002->GetYaxis()->SetTitleFont(42);
   myfit3002->SetParameter(0,0.5007139);
   myfit3002->SetParError(0,0.02034222);
   myfit3002->SetParLimits(0,0,0);
   myfit3002->SetParameter(1,107.6444);
   myfit3002->SetParError(1,9.642882);
   myfit3002->SetParLimits(1,0,0);
   myfit3002->SetParameter(2,62.56355);
   myfit3002->SetParError(2,12.61961);
   myfit3002->SetParLimits(2,0,0);
   myfit3002->SetParameter(3,-0.008763808);
   myfit3002->SetParError(3,0.02159814);
   myfit3002->SetParLimits(3,0,0);
   grae->GetListOfFunctions()->Add(myfit3002);
   
   TPaveStats *ptstats = new TPaveStats(0.5488722,0.6787321,0.9097744,0.9186121,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *AText = ptstats->AddText("#chi^{2} / ndf = 0.6042 / 9");
   AText = ptstats->AddText("p0       = 0.5007 #pm 0.02034 ");
   AText = ptstats->AddText("p1       = 107.6 #pm 9.643 ");
   AText = ptstats->AddText("p2       = 62.56 #pm 12.62 ");
   AText = ptstats->AddText("p3       = -0.008764 #pm 0.0216 ");
   ptstats->SetOptStat(0);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   grae->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(grae->GetListOfFunctions());
   grae->Draw("apz");
   
   TLegend *leg = new TLegend(0.59,0.15,0.9,0.3,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","Data 2015","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("NULL","Fit","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
      tex = new TLatex(0.2,0.8446154,"ATLAS");
tex->SetNDC();
   tex->SetTextFont(72);
   tex->SetTextSize(0.07211538);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.36,0.8446154,"Internal");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.07211538);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.7753846,"#sqrt{s} = 13 TeV, 3.2 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04903846);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2,0.7061538,"#epsilon_{HLT_xe70_tc_lcw}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();

   TLine *line1 = new TLine(150.,0.,150.,1.05);
   line1->SetLineStyle(7);
	 line1->SetLineWidth(2);
   line1->Draw();

   TLine *line2 = new TLine(250.,0.,250.,1.05);
   line2->SetLineStyle(7);
	 line2->SetLineWidth(2);
   line2->Draw();

   TGaxis *gaxis = new TGaxis(-5,20,-5,220,20,220,510,"");
   gaxis->SetLabelOffset(0.005);
   gaxis->SetLabelSize(15);
   gaxis->SetTickSize(0.03);
   gaxis->SetGridLength(0);
   gaxis->SetTitleOffset(1);
   gaxis->SetTitleSize(0.04);
   gaxis->SetTitleColor(1);
   gaxis->SetTitleFont(62);
   gaxis->SetLabelFont(43);
   gaxis->Draw();
   pad1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "pad2",0,0.05,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-87.3253,-0.1571429,640.3855,0.1285714);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.12);
   pad2->SetRightMargin(0.05);
   pad2->SetBottomMargin(0.4);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   
   Double_t Graph0_fx3004[13] = {
   10,
   30,
   55,
   85,
   120,
   160,
   200,
   240,
   280,
   320,
   370,
   450,
   550};
   Double_t Graph0_fy3004[13] = {
   0.1316662,
   -0.1518518,
   -0.1411821,
   0.08483564,
   0.1087166,
   0.01462677,
   -0.01064231,
   0.008724607,
   0.007385009,
   0.007336836,
   0.007336044,
   0.007336042,
   0.007336042};
   Double_t Graph0_felx3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fely3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehx3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fehy3004[13] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   grae = new TGraphAsymmErrors(13,Graph0_fx3004,Graph0_fy3004,Graph0_felx3004,Graph0_fehx3004,Graph0_fely3004,Graph0_fehy3004);
   grae->SetName("Graph0");
   grae->SetTitle(";#it{E}^{miss}_{T} [GeV]; Residuals");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.2);
		  
 
   TH1F *Graph_Graph_Graph30033004 = new TH1F("Graph_Graph_Graph30033004","",100,0,604);
   Graph_Graph_Graph30033004->SetMinimum(-0.1);
   Graph_Graph_Graph30033004->SetMaximum(0.1);
   Graph_Graph_Graph30033004->SetDirectory(0);
   Graph_Graph_Graph30033004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph30033004->SetLineColor(ci);
   Graph_Graph_Graph30033004->SetLineWidth(2);
   Graph_Graph_Graph30033004->SetMarkerStyle(20);
   Graph_Graph_Graph30033004->SetMarkerSize(1.2);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitle("#it{E}^{miss}_{T} [GeV]");
   Graph_Graph_Graph30033004->GetXaxis()->SetLabelFont(43);
   Graph_Graph_Graph30033004->GetXaxis()->SetLabelSize(25);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleSize(25);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleOffset(3.55);
   Graph_Graph_Graph30033004->GetXaxis()->SetTitleFont(43);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitle("Residuals");
   Graph_Graph_Graph30033004->GetYaxis()->SetNdivisions(502);
   Graph_Graph_Graph30033004->GetYaxis()->SetLabelFont(43);
   Graph_Graph_Graph30033004->GetYaxis()->SetLabelSize(25);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleSize(25);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleOffset(1.55);
   Graph_Graph_Graph30033004->GetYaxis()->SetTitleFont(43);
   Graph_Graph_Graph30033004->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph30033004->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph30033004->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph30033004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph30033004);
   
   grae->Draw("apz");

   TLine *line3 = new TLine(150.,-0.1,150.,0.1);
   line3->SetLineStyle(7);
	 line3->SetLineWidth(2);
   line3->Draw();

   TLine *line4 = new TLine(250.,-0.1,250.,0.1);
   line4->SetLineStyle(7);
	 line4->SetLineWidth(2);
   line4->Draw();

   TLine *line = new TLine(0,0,604,0);
   line->SetLineStyle(2);
   line->Draw();
   pad2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}

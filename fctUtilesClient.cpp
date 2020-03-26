void MainAffClient::setArticle0(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineArticle0->clear();
   return;
   }
ui->lineArticle0->setText(Text);
return;
}

void MainAffClient::setArticle1(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineArticle1->clear();
   return;
   }
ui->lineArticle1->setText(Text);
return;
}

void MainAffClient::setArticle2(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineArticle2->clear();
   return;
   }
ui->lineArticle2->setText(Text);
return;
}

void MainAffClient::setArticle3(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineArticle3->clear();
   return;
   }
ui->lineArticle3->setText(Text);
return;
}

void MainAffClient::setArticle4(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineArticle4->clear();
   return;
   }
ui->lineArticle4->setText(Text);
return;
}
void MainAffClient::setPannier(int Q)
{
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineCommande->clear();
   return;
   }
ui->lineCommande->setText(Text);
return;
}

void MainAffClient::setQuantite0(int Q)
{
if (Q < 0)
	{
	ui->lineQuantite0->clear();
	return;
	}
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineQuantite0->clear();
   return;
   }
ui->lineQuantite0->setText(Text);
return;
}

void MainAffClient::setQuantite1(int Q)
{
if (Q < 0)
	{
	ui->lineQuantite1->clear();
	return;
	}
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineQuantite1->clear();
   return;
   }
ui->lineQuantite1->setText(Text);
return;
}

void MainAffClient::setQuantite2(int Q)
{
if (Q < 0)
	{
	ui->lineQuantite2->clear();
	return;
	}
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineQuantite2->clear();
   return;
   }
ui->lineQuantite2->setText(Text);
return;
}

void MainAffClient::setQuantite3(int Q)
{
if (Q < 0)
	{
	ui->lineQuantite3->clear();
	return;
	}
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineQuantite3->clear();
   return;
   }
ui->lineQuantite3->setText(Text);
return;
}

void MainAffClient::setQuantite4(int Q)
{
if (Q < 0)
	{
	ui->lineQuantite4->clear();
	return;
	}
char	Text[8];
sprintf(Text,"%d",Q);
if (strlen(Text) == 0 ) 
   { 
   ui->lineQuantite4->clear();
   return;
   }
ui->lineQuantite4->setText(Text);
return;
}
int MainAffClient::getQuantite0() const
{
return atoi(ui->lineQuantite0->text().toStdString().c_str());
}
int MainAffClient::getQuantite1() const
{
return atoi(ui->lineQuantite1->text().toStdString().c_str());
}
int MainAffClient::getQuantite2() const
{
return atoi(ui->lineQuantite2->text().toStdString().c_str());
}
int MainAffClient::getQuantite3() const
{
return atoi(ui->lineQuantite3->text().toStdString().c_str());
}
int MainAffClient::getQuantite4() const
{
return atoi(ui->lineQuantite4->text().toStdString().c_str());
}
	
void MainAffClient::setBox0(bool T)
{
ui->checkBox0->setChecked(T);
}

void MainAffClient::setBox1(bool T)
{
ui->checkBox1->setChecked(T);
}

void MainAffClient::setBox2(bool T)
{
ui->checkBox2->setChecked(T);
}

void MainAffClient::setBox3(bool T)
{
ui->checkBox3->setChecked(T);
}

void MainAffClient::setBox4(bool T)
{
ui->checkBox4->setChecked(T);
}

bool MainAffClient::getBox0() const
{
return ui->checkBox0->checkState();
}
bool MainAffClient::getBox1() const
{
return ui->checkBox1->checkState();
}
bool MainAffClient::getBox2() const
{
return ui->checkBox2->checkState();
}
bool MainAffClient::getBox3() const
{
return ui->checkBox3->checkState();
}
bool MainAffClient::getBox4() const
{
return ui->checkBox4->checkState();
}
void MainAffClient::setRadioBoutton0(bool b) 
{
ui->radioButton0->setChecked(b);
}

void MainAffClient::setImage(const char* Image)
{
    QPixmap Pix(Image);
    ui->labelImage->setPixmap(Pix);
    ui->labelImage->setScaledContents(true);
}

void MainAffClient::setInfo(const char* Text)
{
if (strlen(Text) == 0 ) 
   { 
   ui->lineInfo->clear();
   return;
   }
ui->lineInfo->setText(Text);
return;
}

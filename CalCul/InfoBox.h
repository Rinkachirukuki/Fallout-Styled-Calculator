#pragma once

namespace CalCul {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ InfoBox
	/// </summary>
	public ref class InfoBox : public System::Windows::Forms::Form
	{
	public:
		InfoBox(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~InfoBox()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::PictureBox^  pictureBox1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(InfoBox::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(747, 445);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(18, 18);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 27;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &InfoBox::pictureBox1_MouseDown);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &InfoBox::pictureBox1_MouseUp);
			// 
			// InfoBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(857, 480);
			this->Controls->Add(this->pictureBox1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"InfoBox";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"InfoBox";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
bool dragging;		
Point offset;			
private: System::Void red_button_up(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN2.wav");
	f->Play();
	Bitmap^ png = gcnew Bitmap(18, 18);
	Graphics^ g = Graphics::FromImage(png);
	button->Image = png;
	Bitmap^ image1;
	image1 = gcnew Bitmap("button_red_off.png");
	button->Image = image1;
}
private: System::Void red_button_down(System::Windows::Forms::PictureBox ^ button) {
	System::Media::SoundPlayer ^ f;
	f = gcnew System::Media::SoundPlayer("BUTIN1.wav");
	f->Play();
	Bitmap^ png = gcnew Bitmap(18, 18);
	Graphics^ g = Graphics::FromImage(png);
	button->Image = png;
	Bitmap^ image1;
	image1 = gcnew Bitmap("button_red_on.png");
	button->Image = image1;
}
private: System::Void pictureBox1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_up(pictureBox1);
	this->Close();
}
private: System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	red_button_down(pictureBox1);
}
private: System::Void clc_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = true;
	this->offset = Point(e->X, e->Y);
}
private: System::Void clc_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (this->dragging) {
		Point currentScreenPos = PointToScreen(e->Location);
		Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
	}
}
private: System::Void clc_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	this->dragging = false;
}
};
}

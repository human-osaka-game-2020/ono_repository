#ifndef PROCESSING_H
#define PROCESSING_H

// ================================================================================
// �Q�[������
// ================================================================================
void GameProcessing();

// ================================================================================
// �`�揈��
// ================================================================================
void DrawProcessing();

// ================================================================================
// �t�F�[�h�����V�[������
// ===============================================================================
enum FadeScene
{
	Wait,
	FadeIn,
	FadeOut
};

static FadeScene fadeScene = Wait;

#endif